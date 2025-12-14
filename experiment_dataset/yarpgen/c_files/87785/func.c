/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87785
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
    var_17 = ((((int) -2285297465261351626LL)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((var_12) - (((/* implicit */int) (_Bool)1)))))))));
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)214))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((unsigned char) var_14))) : (302246062))))));
                    var_21 = ((/* implicit */long long int) arr_3 [i_0 - 1] [i_1]);
                }
                for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_3))));
                    arr_11 [i_0 + 2] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((-742078577) >= (((/* implicit */int) arr_8 [i_1]))))))), (((/* implicit */int) var_4))));
                }
                /* LoopNest 2 */
                for (unsigned char i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4 - 2] [i_4])) ? (arr_7 [i_4] [i_4 + 4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_24 = (~(((/* implicit */int) (((+(arr_14 [i_5] [i_4] [i_4] [i_4] [i_0] [i_1]))) > (((/* implicit */int) (!(var_1))))))));
                            /* LoopSeq 2 */
                            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */unsigned char) (_Bool)1);
                                arr_21 [i_4] [i_0] [i_4] [i_4] [10] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                                var_26 = ((/* implicit */long long int) (-2147483647 - 1));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                            {
                                var_27 = ((/* implicit */int) (+(arr_20 [i_4 + 4] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4])));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2118487750)) ? (4503599627370495LL) : (5523983143902585851LL)));
                                var_29 = ((/* implicit */_Bool) 2285297465261351633LL);
                                arr_25 [i_4] [i_1] [i_4] [i_4] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((long long int) var_10));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_1] [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_0]))));
                var_31 &= ((/* implicit */unsigned char) (~(arr_14 [i_1] [i_1] [i_1] [i_0] [6LL] [i_0])));
            }
        } 
    } 
}
