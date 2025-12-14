/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85904
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 3] [5])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) < (min((((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) ^ (411984340))), (((((/* implicit */_Bool) arr_2 [(unsigned char)17] [(unsigned char)17])) ? (((/* implicit */int) arr_2 [i_0 + 3] [i_0])) : (((/* implicit */int) (unsigned char)123))))))));
        var_15 = ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)167), (arr_0 [i_0] [9])))) && (((/* implicit */_Bool) min((var_8), (1660515396))))))) : ((~(1428308632))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] = var_12;
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)108)))))) ? (max((((/* implicit */int) arr_8 [i_2] [i_2])), (((((/* implicit */_Bool) var_6)) ? (var_5) : (arr_7 [i_0 + 3] [i_1] [3]))))) : (max((((var_6) | (((/* implicit */int) (unsigned char)88)))), (((/* implicit */int) arr_11 [i_0 + 1]))))));
                        var_17 |= ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_1] [i_2] [i_0 + 3] [i_3] [i_1])) ? (((/* implicit */int) var_0)) : (-411984341)));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            arr_15 [4] [i_1] [i_1] [(unsigned char)12] [i_1] [i_1] [5] = ((/* implicit */int) ((unsigned char) max((-2147483637), (var_6))));
                            var_18 = (~(((/* implicit */int) max((arr_4 [i_0 + 3] [(unsigned char)11]), ((unsigned char)85)))));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0 + 1] [(unsigned char)9] [i_0])))) > (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0] [(unsigned char)10])) < (var_6))))));
                            var_20 = ((/* implicit */int) arr_5 [i_0] [(unsigned char)11]);
                        }
                        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            var_21 = max((((/* implicit */int) ((unsigned char) (-2147483647 - 1)))), (((((/* implicit */_Bool) (-(arr_19 [i_0 + 1])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)90)))));
                            arr_20 [i_1] [i_3] [i_3] = ((int) -1660515396);
                            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */int) arr_17 [(unsigned char)8] [(unsigned char)8] [6] [i_2] [i_3] [i_6])) ^ (((/* implicit */int) (unsigned char)98)))) != (var_9))))));
                            var_23 = ((/* implicit */unsigned char) min((1129634019), ((-2147483647 - 1))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 2])) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_7 [i_0 + 1] [i_0] [i_0 - 1]))) == (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 3])) ? (arr_7 [i_0 - 1] [i_0] [i_0 - 1]) : (arr_7 [i_0 + 2] [(unsigned char)16] [i_0 + 2])))));
            arr_21 [i_0 + 2] [i_0 + 3] [i_0] = arr_6 [i_0 - 1] [i_0 + 2];
            arr_22 [i_1] [i_0] = ((/* implicit */int) ((((((((/* implicit */int) arr_14 [17] [17] [i_0] [17] [i_1] [i_1] [i_1])) < (-411984311))) ? (-1001634463) : (((/* implicit */int) var_1)))) == ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            var_25 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_0 + 2] [(unsigned char)17] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0])))) > ((+(((/* implicit */int) var_0))))));
            arr_26 [11] [11] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -411984372)) ? (((/* implicit */int) var_13)) : (arr_24 [i_0] [i_0] [5])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (arr_19 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)82)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)80)))));
        }
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_26 = ((/* implicit */int) min((var_26), (arr_6 [i_0] [i_8])));
            arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */int) (unsigned char)82);
            arr_30 [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((int) (((-2147483647 - 1)) > (((/* implicit */int) arr_3 [i_0] [i_0 + 2])))))));
        }
        for (unsigned char i_9 = 2; i_9 < 16; i_9 += 2) 
        {
            var_27 = arr_27 [2];
            arr_33 [7] [i_0] [i_0] = 2147483626;
        }
        /* LoopSeq 1 */
        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) (unsigned char)14))))) || (((/* implicit */_Bool) var_1))))), (((2147483645) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))))));
            var_29 = ((/* implicit */int) var_11);
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                var_30 = ((/* implicit */int) var_10);
                var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1080807052)))) ? ((~(((/* implicit */int) (unsigned char)164)))) : (((/* implicit */int) min((var_7), (var_2))))))) ? (((-1695027881) & (((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) arr_14 [i_0 + 3] [i_11] [i_11] [i_10 + 1] [(unsigned char)1] [i_10] [i_10])));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_38 [i_0] [i_10])))) ? (max((491714622), (((/* implicit */int) var_10)))) : (0)))) ? (max(((~(((/* implicit */int) (unsigned char)153)))), (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) arr_3 [i_10 + 2] [i_10 + 2])) : (((/* implicit */int) (unsigned char)180)))))) : (((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */int) arr_5 [9] [6])) : (((/* implicit */int) var_13))))));
            }
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        var_33 *= var_1;
        var_34 = ((((/* implicit */_Bool) arr_34 [2] [i_12] [(unsigned char)6])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((-1080807052) != (((/* implicit */int) var_10))))));
    }
    var_35 = max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)253)) > (var_8)))), (((unsigned char) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)173))))));
}
