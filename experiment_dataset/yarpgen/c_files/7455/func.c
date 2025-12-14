/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7455
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_10))))), (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_15))))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (7372255628530789274ULL))) ^ (5259895452774313356ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 2])) * ((((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) * (((((/* implicit */int) arr_4 [i_1 - 1] [i_1] [(unsigned char)1])) / (arr_1 [0U])))))));
                var_19 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 2] [(signed char)8]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_20 = ((/* implicit */int) arr_5 [i_3]);
                    var_21 = (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_2 - 1] [i_2 + 1]))) - (1515420485299847024ULL))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (arr_9 [i_2 + 2] [i_2 + 2] [(signed char)6])));
                }
                var_23 += ((/* implicit */unsigned short) (((+((~(var_5))))) ^ (min(((+(arr_11 [10]))), (min((arr_11 [(unsigned char)14]), (((/* implicit */long long int) var_11))))))));
                arr_12 [7] [i_3] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1])) && (((var_15) && (((/* implicit */_Bool) arr_11 [i_3]))))))));
                var_24 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))));
                    var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)43409)) / (((/* implicit */int) arr_6 [i_3]))))))), ((-(max((((/* implicit */unsigned long long int) arr_5 [i_2])), (arr_10 [i_3] [i_3] [i_3])))))));
                    var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [14] [i_3] [14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))) != (((/* implicit */int) arr_5 [i_2 - 1])))))) : (((((((/* implicit */_Bool) 8139571504086101662ULL)) || (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) arr_8 [i_2] [(short)14] [i_5]))))) : ((-(arr_10 [(unsigned char)6] [i_3] [(unsigned char)6])))))));
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) (!((!(((((/* implicit */_Bool) arr_10 [i_2 + 1] [(short)10] [i_3])) || (((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2]))))))));
                }
                for (short i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) (-(max((3548118227U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 2] [i_2])))))))));
                    arr_18 [i_3] [i_3] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_5 [(signed char)5])) << (((((/* implicit */int) arr_9 [i_6] [i_3] [i_2 + 1])) - (24973))))), (max(((+(((/* implicit */int) arr_8 [i_2] [i_3] [i_6])))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3] [i_2])))))))));
                }
            }
        } 
    } 
}
