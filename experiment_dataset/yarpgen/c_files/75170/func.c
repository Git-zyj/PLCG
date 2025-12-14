/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75170
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
    var_14 = ((/* implicit */unsigned char) (~(var_13)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            arr_4 [i_1] [i_0] [i_1 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((((signed char) arr_2 [5ULL] [i_0])), (arr_3 [i_0] [i_0] [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [0U] [i_0] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_2 [(unsigned char)3] [(unsigned short)7])));
                arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((unsigned int) arr_1 [i_0])) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1])))))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 - 1])) % (((/* implicit */int) arr_6 [i_1 - 1] [i_1]))));
                    arr_12 [i_1] [i_0] [(signed char)6] [i_3] [i_3] [i_3] = (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))));
                }
            }
            arr_13 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((int) arr_0 [i_0])) / ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
            arr_14 [(signed char)10] = ((/* implicit */int) min((((_Bool) ((_Bool) arr_6 [i_0] [i_1]))), (((((arr_2 [10] [10]) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0])))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_0] [(unsigned short)8] = ((/* implicit */unsigned int) min((((long long int) (~(((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) ((((int) arr_0 [i_4])) - (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_4] [8LL]))))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_4] [i_4] [i_0] [11U] = ((/* implicit */int) (!(((((long long int) arr_23 [i_6] [(unsigned char)11] [i_0] [i_0] [i_4] [i_0])) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))))))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((max((arr_1 [2]), (((/* implicit */unsigned long long int) arr_5 [i_0] [(unsigned char)1] [i_0])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_0] [i_4] [i_5 + 2])) < (arr_20 [(_Bool)1] [i_4] [13] [i_6])))))))) == (max(((+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((arr_22 [i_6] [i_0] [i_0]) == (arr_20 [i_6] [i_5 + 2] [i_4] [i_0]))))))));
                        arr_26 [13] [i_0] [i_5 + 3] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_4]))));
                    }
                } 
            } 
        }
        arr_27 [i_0] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) max((arr_19 [i_0]), (arr_19 [4U])))))));
        arr_28 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) max((((short) arr_6 [i_0] [i_0])), (((/* implicit */short) arr_6 [i_0] [i_0]))))), ((-(min((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [10]))))))));
    }
    /* vectorizable */
    for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
    {
        arr_33 [8] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_31 [i_7 + 3]))))));
        arr_34 [i_7] [6] = ((/* implicit */unsigned char) ((int) (-(arr_31 [i_7]))));
    }
}
