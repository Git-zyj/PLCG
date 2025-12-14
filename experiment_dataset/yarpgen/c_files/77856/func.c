/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77856
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_16 *= ((/* implicit */_Bool) (-(((var_6) * (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (var_0))))))));
    var_17 ^= ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_5);
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1480486284U))));
            }
            for (int i_3 = 3; i_3 < 19; i_3 += 1) 
            {
                var_19 = ((/* implicit */signed char) var_2);
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (min((arr_4 [i_0] [i_1] [i_3 - 2]), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])))))))));
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
            }
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_13 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                {
                    arr_18 [i_5] [i_0] [13] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_3 [i_0 + 1] [i_0 + 1] [i_5 - 2]));
                    var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) - (1698251546585642323LL)));
                    arr_19 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_5 + 1]))));
                    arr_20 [(short)9] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) (~(arr_4 [i_0 + 1] [i_1] [i_5 - 1])));
                }
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 *= ((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_0 + 1])) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_0]))) : (-1LL))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [0LL] [i_0] [15ULL] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [(unsigned short)10] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))) : (var_15)));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_15 [i_0 + 1] [0U] [i_0] [i_0 + 1] [i_4])));
                        var_26 -= ((/* implicit */int) var_7);
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_6] [i_8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) arr_10 [(_Bool)1] [i_1] [i_1]))))))));
                        var_28 -= ((/* implicit */_Bool) (((~(((/* implicit */int) var_13)))) | (((/* implicit */int) var_9))));
                        var_29 = ((/* implicit */short) ((((/* implicit */long long int) 2073801502U)) > (arr_2 [i_0])));
                        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1342142896)))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_9 [i_1] [i_1] [i_4]))))));
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_1] [i_0] [i_6] [i_9] = ((/* implicit */unsigned long long int) var_13);
                        var_31 = ((/* implicit */unsigned int) (-(var_3)));
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_32 |= ((/* implicit */_Bool) var_11);
                        var_33 = ((/* implicit */unsigned int) (-(-13LL)));
                        var_34 = ((/* implicit */signed char) (-(var_15)));
                    }
                    var_35 = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_1]))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_36 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)12431)) << (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((_Bool) arr_21 [i_0] [i_1] [i_1] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((unsigned short) arr_38 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_0]));
                        var_38 = ((/* implicit */_Bool) ((arr_9 [i_0] [i_0 + 1] [i_12 - 1]) - (arr_9 [i_0] [i_0 + 1] [i_12 - 1])));
                        var_39 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_12 + 1] [i_12 - 1] [i_1]))));
                        arr_40 [i_0 + 1] [i_0 + 1] [i_1] [(_Bool)1] [i_0 + 1] [i_0] [i_0 + 1] = ((((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0 + 1] [i_0] [i_11] [i_0 + 1] [i_11] [i_12 - 1])) ? (arr_33 [i_4] [i_0 + 1] [i_0] [i_1] [i_12 + 1] [i_11] [i_12 + 1]) : (arr_33 [i_0] [i_0 + 1] [i_0] [i_1] [8ULL] [i_4] [i_12 - 1]));
                    }
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        arr_43 [i_0 + 1] [i_1] [i_4] [i_0] [i_0 + 1] [13LL] [i_13] = ((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_0] [i_0] [19] [i_0]);
                        var_40 *= ((/* implicit */_Bool) arr_34 [14ULL] [i_1] [(_Bool)1] [i_11] [i_1]);
                        var_41 ^= ((/* implicit */signed char) arr_32 [i_11] [i_11] [i_4] [i_11] [i_13] [i_4]);
                    }
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    var_42 = ((/* implicit */short) ((((/* implicit */int) var_5)) / (var_0)));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        var_43 = (-(1890802798));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [(_Bool)1] [i_14 + 1] [i_4] [i_0 + 1] [i_15])) + (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_45 ^= ((/* implicit */unsigned long long int) ((1317398346U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_0] [i_0] [i_0 + 1] [i_4] [i_14])))));
                        arr_56 [i_0] [i_1] [i_4] [i_0] [i_0] [18LL] [3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_35 [i_0] [i_1] [i_0])))) % (arr_41 [i_0] [14LL] [i_0])));
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_45 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_4] [i_16])) : (arr_52 [i_0] [i_1] [i_4] [i_4] [i_4] [i_0 + 1])));
                    }
                }
                arr_57 [(unsigned short)1] [i_0] [i_1] [i_4] = ((/* implicit */unsigned short) arr_46 [i_0 + 1] [i_0]);
            }
            var_47 = ((/* implicit */unsigned int) arr_28 [i_0] [11] [i_0]);
            var_48 -= ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_22 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_1]), (arr_22 [i_1] [i_1] [14] [i_1] [i_1] [i_1]))))));
        }
        var_49 -= (~(((/* implicit */int) ((_Bool) arr_12 [i_0 + 1] [(unsigned short)18] [i_0]))));
        var_50 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_1 [i_0 + 1] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]))))))) : (max((((/* implicit */long long int) ((unsigned short) 1LL))), (min((6LL), (((/* implicit */long long int) -1342142896))))))));
        arr_58 [i_0 + 1] [i_0] = (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_9 [i_0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) arr_33 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
    }
    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)217))))))) : (((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */_Bool) var_2)) ? (11429682303087703515ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
}
