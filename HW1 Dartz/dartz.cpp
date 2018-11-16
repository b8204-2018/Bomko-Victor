int dartz(double r)
{
    int Score;
    if (r<=0.5)
    {
        Score = 5;
    }

    if ((r <= 1.5) && (r > 0.5))
    {
        Score = 4;
    }

    if ((r <= 2.5) && (r > 1.5))
    {
        Score = 3;
    }

    if ((r <= 3.5) && (r > 2.5))
    {
        Score = 2;
    }

    if ((r <= 4.5) && (r > 3.5))
    {
        Score = 1;
    }

    if (r > 4.5)
    {
        Score = 0;
    }
    return Score;
    }

