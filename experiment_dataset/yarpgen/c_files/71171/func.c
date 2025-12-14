/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71171
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
    var_16 = ((/* implicit */int) max((var_16), ((+((+(((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_0 [i_0 + 2])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((min((arr_1 [i_0] [i_0 - 4]), (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) max((arr_0 [i_0 + 1]), (var_0))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [(unsigned short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? ((~((~(12322898540037331883ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_2]))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_6 [i_0] [4ULL] [i_0 - 2])))))));
                    var_18 = ((/* implicit */unsigned short) min((min((15454157524424779319ULL), (12322898540037331883ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                    arr_10 [i_0 + 2] [i_0 + 2] [i_1] = min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_19 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
        arr_13 [i_3] [i_3] = (_Bool)1;
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_18 [i_4] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned short)15853)), (arr_11 [i_4]))), (((int) var_11))));
            var_20 *= ((/* implicit */int) var_0);
            var_21 = ((/* implicit */_Bool) max((var_21), ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)64476)) : (((/* implicit */int) (_Bool)1)))) >= ((~(((/* implicit */int) ((((/* implicit */int) arr_14 [i_4])) < (((/* implicit */int) (_Bool)1)))))))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */int) (((-(var_12))) < (((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) var_11)) : (arr_11 [(unsigned short)2])))))), ((+((~(((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))))))))));
            arr_21 [i_6] [i_6] = ((/* implicit */_Bool) arr_12 [i_4]);
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_4] = ((/* implicit */int) arr_20 [i_4] [i_4] [i_4]);
                var_23 = ((/* implicit */_Bool) (~((-(((/* implicit */int) min((var_13), (arr_17 [i_4] [i_4]))))))));
                var_24 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_19 [i_4] [i_6] [i_7])))), (((((/* implicit */_Bool) arr_19 [(unsigned short)14] [i_6] [(unsigned short)13])) ? (((/* implicit */int) arr_19 [i_4] [i_7] [i_4])) : (((/* implicit */int) arr_19 [i_4] [(_Bool)1] [i_4]))))));
            }
        }
        arr_26 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(12322898540037331862ULL))))));
        arr_27 [11] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_11 [i_4]) < (arr_11 [i_4])))) < ((+(arr_23 [i_4])))));
    }
}
