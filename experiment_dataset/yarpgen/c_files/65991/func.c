/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65991
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [(_Bool)1] [(_Bool)1] = ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (7051851562948117154ULL)))) ? (((/* implicit */int) ((_Bool) 34359738368LL))) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_4)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_10 [i_3] [i_2]);
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((arr_0 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_1])))))) ? ((~(-34359738384LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) -1310909030)))))))));
                                var_19 += 34359738368LL;
                                arr_13 [i_3] [i_3] [i_1] [i_1] [i_0 - 1] [i_3] = ((/* implicit */unsigned char) var_8);
                                var_20 = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned char)4), ((unsigned char)252)))), (((arr_5 [i_0 + 1] [i_0 - 1] [(unsigned char)12] [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0] [i_0 + 1]) : (1065353216LL)))));
                arr_14 [i_1] [i_1] [i_0] = (~((~(((long long int) arr_2 [(_Bool)1])))));
                arr_15 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [10LL])) ? (max((var_16), (((/* implicit */int) arr_10 [i_0] [(unsigned char)5])))) : (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) min((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_15))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            {
                arr_23 [i_5] [i_6] = ((((/* implicit */_Bool) ((arr_3 [i_6 + 2] [i_6 + 3] [i_6 - 2]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 + 2] [i_6 - 2] [i_6 + 2])))))) ? (((/* implicit */int) arr_3 [i_6 + 1] [i_6 + 3] [i_6 + 3])) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_6 - 2] [i_6 + 1] [i_6 + 3])) <= (((/* implicit */int) arr_3 [i_6 - 2] [i_6 + 3] [i_6 - 2]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    arr_26 [i_6] = ((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5]);
                    var_22 = ((/* implicit */_Bool) min((var_22), (var_3)));
                    arr_27 [i_6] [i_6] [i_7] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (var_5)));
                                var_24 = ((/* implicit */unsigned char) var_0);
                            }
                        } 
                    } 
                }
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) (signed char)-49);
                    arr_34 [i_5] [i_5] [i_6] [i_10] = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) ((var_13) ? (var_0) : (((/* implicit */int) (unsigned char)3)))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) >= (((/* implicit */int) arr_3 [(_Bool)1] [i_6] [(unsigned char)4]))))) + (((/* implicit */int) arr_8 [(_Bool)1]))))) || (((/* implicit */_Bool) arr_8 [(unsigned char)12]))))));
                    var_27 = ((/* implicit */unsigned char) ((((((var_3) && (var_3))) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                }
            }
        } 
    } 
}
