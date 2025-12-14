/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70208
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
    var_18 = ((/* implicit */signed char) ((short) var_3));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            var_19 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_5 [i_0] [i_1])))) <= (((/* implicit */int) ((unsigned short) (_Bool)0)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (arr_4 [i_0])));
                        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 3] [i_3 - 1])) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0])))));
                        var_22 &= ((/* implicit */short) 18446744073709551594ULL);
                    }
                } 
            } 
            var_23 -= ((/* implicit */unsigned int) ((((_Bool) (_Bool)0)) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4] [i_0]))));
            arr_12 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_0] [i_4]))));
        }
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_15))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (9407625987195483486ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529)))))))));
        var_27 |= (+(14011649688762516411ULL));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_13 [i_6])) : (((((/* implicit */int) (unsigned short)23352)) | (((/* implicit */int) (_Bool)0))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-325435208)));
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : ((+(1300677933U)))));
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_32 = ((/* implicit */_Bool) var_2);
                var_33 = (~((((_Bool)1) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_14 [i_0])))));
            }
            var_34 = ((/* implicit */_Bool) min((var_34), (((_Bool) arr_18 [i_0] [i_0] [i_0] [i_5]))));
        }
        for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) 
        {
            var_35 = ((/* implicit */int) max((var_35), ((~(((/* implicit */int) (unsigned short)23675))))));
            var_36 = ((/* implicit */int) (_Bool)0);
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_37 |= (-(((/* implicit */int) arr_24 [i_10 + 2] [i_10 - 1] [i_11 - 1] [i_11 - 1])));
                var_38 -= (!(arr_17 [i_0] [i_10] [i_11 - 1] [i_11 - 1]));
                var_39 *= ((/* implicit */unsigned short) (-(14800462209399495870ULL)));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) var_14))))))));
                arr_31 [i_0] [i_0] [i_10] [i_12] = var_9;
            }
            arr_32 [i_0] [i_0] = ((/* implicit */signed char) arr_24 [i_0] [i_10 + 3] [i_0] [i_10 + 2]);
            var_41 = ((_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8)));
        }
    }
}
