/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67459
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
    var_17 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_4);
                var_18 = ((/* implicit */long long int) (_Bool)0);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 -= var_9;
                                arr_16 [(_Bool)1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((+((~(((/* implicit */int) (unsigned short)12506)))))) : (((/* implicit */int) ((arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1]) < (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) var_11)))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_16));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                        var_21 = ((/* implicit */long long int) ((((long long int) arr_11 [i_0] [i_1] [i_1] [i_1] [i_6])) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
                        var_22 = ((long long int) min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))), (arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? ((~(((/* implicit */int) (unsigned short)53029)))) : (((/* implicit */int) arr_9 [i_0] [i_0]))));
                        arr_26 [i_0] [i_0] [i_0 - 1] [i_1] [i_5] [i_7] = (!((!(var_8))));
                        var_24 ^= ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_0] [i_1] [i_5] [(_Bool)1])), ((unsigned short)12514)))) != (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_4))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_6), ((!(var_5))))))));
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_25 = ((_Bool) ((((/* implicit */_Bool) 287948901175001088LL)) && (((/* implicit */_Bool) var_2))));
                                var_26 = (~(arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_10] [i_0 - 1]));
                            }
                        } 
                    } 
                    arr_33 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_0]);
                    arr_34 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_17 [i_0 - 1] [i_1] [i_8]));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_38 [i_0] [(signed char)4] [i_11] = ((_Bool) arr_15 [i_0 - 1] [i_0 - 1] [i_11] [i_1] [i_11] [i_1] [i_11]);
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((_Bool) ((_Bool) arr_37 [i_11] [i_0 - 1]))))));
                }
                arr_39 [i_0 - 1] = ((max((((((/* implicit */_Bool) arr_17 [i_0] [(unsigned short)6] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_15))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [(signed char)1] [i_0]))) : (var_15))))) < (((/* implicit */long long int) ((/* implicit */int) var_10))));
            }
        } 
    } 
}
