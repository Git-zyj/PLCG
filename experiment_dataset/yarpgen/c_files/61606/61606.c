/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_1] [10] [i_1] [i_0] = -4801112210046600920;
                        var_12 = ((3072803197 >> (820440649 - 820440646)));
                        var_13 = ((1 ? 11946328719931562428 : var_6));
                    }
                    var_14 = (max(var_14, (!9)));

                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_15 -= (max((min(962131764, 1)), ((max(var_3, var_1)))));
                        var_16 = 3072803197;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_17 = (!var_5);
                            var_18 = (max(var_18, (1222164095 || 1)));
                        }
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_19 ^= -8259643745416474488;
                            var_20 = (((((max(var_1, 3072803185))) ? var_3 : ((max(var_2, var_2))))));
                            var_21 = ((-(((-1694975333735197412 / var_3) % -4801112210046600929))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_22 = (min(var_4, (--111)));
                            var_23 = (min(((max(var_6, var_6))), -3072803197));
                            var_24 = (((max(var_0, -4801112210046600920)) >= (!8259643745416474488)));
                            var_25 ^= (min((max(2254960705564657344, 22800)), ((~(var_10 + var_7)))));
                        }
                        var_26 = ((((277076930199552 ? var_10 : 277076930199556))) || ((max(-0, (min(-8259643745416474506, var_10))))));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_27 ^= ((-(~var_9)));
                        var_28 = (min((min(0, 3072803201)), var_6));
                        var_29 = (min(var_29, ((((0 || 8851487225000457185) || (28815 <= -14))))));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_30 *= ((((~(10 && 22804))) > 22811));
                            var_31 *= (min((min(var_4, 5)), (((!(((var_2 ? -4801112210046600925 : var_4))))))));
                        }
                        var_32 = (((min((var_11 <= 65535), (~42713))) % (((var_7 <= (-2470809665177221769 && 99))))));
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_33 ^= ((((((!(!var_5))))) > (1 | 3986551355985842431)));
                        var_34 = (min(20, 224));
                        var_35 *= ((((((max(var_4, var_10))) ? (-105 % var_0) : (min(var_10, 9223372036854775807)))) >= 240));
                    }
                }
            }
        }
    }
    var_36 = (max(var_6, var_0));
    var_37 = 13;
    #pragma endscop
}
