class LinearRegression : public Model {
private:
    Matrix weights;
    double learning_rate;
    int epochs;

public:
    LinearRegression(double lr = 0.01, int ep = 1000);
    void train(const Matrix& X, const Matrix& y) override;
    Matrix predict(const Matrix& X) override;
};
