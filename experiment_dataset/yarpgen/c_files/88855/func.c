/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88855
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)3]))) / (arr_0 [i_0]))))));
        var_13 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)4]))))) ? (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1]))) < (var_4))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_2] [4U]), (arr_1 [2] [i_1]))))))) > (min((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned int) arr_2 [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)50951))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [10U] [i_1] [i_2] [i_3 - 3] [i_2])) > (((/* implicit */int) arr_6 [i_3] [i_3] [i_3 - 3] [i_3 + 4] [i_2]))))) : (((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_3 + 2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2] [(unsigned short)4])) ? (((/* implicit */int) ((arr_3 [i_0] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_3 + 1] [i_2])) == (((/* implicit */int) arr_1 [i_3 + 1] [4]))))))))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_3] [(signed char)0] [i_0] [i_3 + 1] [i_2])), (min((((/* implicit */int) arr_1 [i_1] [17LL])), (arr_7 [i_2] [(signed char)15])))))) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_1])))));
                    }
                    var_17 += ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) 2639267045U)) ? (((/* implicit */int) var_6)) : (-91626423))) < (((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [i_1] [i_1])) > (arr_0 [i_0]))))))) < (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)7] [i_2])) > (((/* implicit */int) ((unsigned short) arr_2 [(short)11]))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(arr_4 [i_2] [17U] [i_2] [i_2]))), (((/* implicit */int) arr_1 [8U] [i_1]))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)3])) ? (arr_3 [5U] [(unsigned short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_1] [i_2]))))))) : (max((((/* implicit */int) ((signed char) arr_2 [i_2]))), ((+(((/* implicit */int) arr_2 [i_0]))))))));
                    var_19 *= ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [i_2] [i_1]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_5), (((unsigned int) (unsigned short)57997)))))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_12 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30710)))))) ? (arr_0 [i_4]) : (((unsigned int) arr_3 [i_4] [i_5]))))) ? (((((/* implicit */_Bool) ((arr_12 [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24585)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_5] [8U] [i_5] [i_4]))) : (((((/* implicit */_Bool) arr_14 [i_4] [(unsigned short)8] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [(unsigned short)13]))))) : (((unsigned int) ((((/* implicit */int) arr_2 [i_6])) + (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_5] [i_4]))) : (arr_8 [i_5])))) ? (max((((/* implicit */unsigned int) arr_10 [i_4] [i_5] [i_6])), (arr_8 [i_5]))) : (((((/* implicit */_Bool) 3580947226U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4]))) : (arr_12 [i_6])))))) && (((/* implicit */_Bool) arr_10 [i_4] [i_5] [i_6]))));
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_5])))))) ? (min((((/* implicit */unsigned int) arr_4 [i_4] [i_5] [i_4] [i_4])), (arr_0 [i_4]))) : (arr_3 [(signed char)5] [i_4]))) > ((+(arr_8 [i_5])))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((signed char) ((unsigned int) arr_0 [i_5]))))));
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */unsigned int) var_2);
}
