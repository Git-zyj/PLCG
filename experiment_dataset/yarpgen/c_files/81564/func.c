/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81564
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 2047ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)28)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-96))))), (((((/* implicit */_Bool) (unsigned short)46280)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))))) ^ (min((((/* implicit */unsigned long long int) (unsigned short)19249)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) ^ (arr_1 [i_1])))))));
                var_16 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0] [i_0]) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_1 [i_0]))) : (((arr_1 [i_1]) - (arr_1 [i_0])))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) 125224941))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (~(arr_1 [i_2])));
        arr_9 [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-4))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) (signed char)121))))));
        arr_10 [i_2] = ((/* implicit */int) ((long long int) 2023400655U));
    }
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        arr_13 [5U] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_4 [i_3] [i_3] [(signed char)12]), (var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_12 [i_3] [i_3])))) : (min((((/* implicit */unsigned int) arr_4 [i_3] [i_3 - 1] [i_3])), (var_13)))))) || (((/* implicit */_Bool) (signed char)95))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
        {
            arr_18 [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 + 2] [i_4 - 2]))) + (arr_0 [i_3 + 2])));
            var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_16 [i_4 + 1] [i_3 + 2]));
        }
        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned char) (signed char)101))))), ((+(var_14)))))) ? (((var_12) ? (max((1253402854), (((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned short) 5620490374248686035LL))))) : (((/* implicit */int) ((((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 + 3] [i_3 + 3] [i_5]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 2] [i_5 - 2] [i_3 + 2]))))))));
            var_21 = ((/* implicit */unsigned short) max(((+(min((-1168507038), (((/* implicit */int) (unsigned short)46369)))))), (((/* implicit */int) (signed char)122))));
            var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_12 [i_5 - 1] [i_5 - 1])) ? (arr_12 [i_5 - 1] [i_5]) : (arr_12 [i_5 + 1] [i_5 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (278821761U))))));
        }
        arr_23 [i_3] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_0)), (arr_0 [i_3 - 1]))), (min((((/* implicit */long long int) -1168507063)), (arr_0 [i_3 - 1])))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((signed char)22), (((/* implicit */signed char) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5))) > (((/* implicit */unsigned int) ((int) min((var_6), (137082686U)))))));
}
