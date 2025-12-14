/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9361
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_1]) >> (((((((/* implicit */unsigned long long int) -1994243531)) ^ (arr_0 [i_0]))) - (325493561713425667ULL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1))))), (((arr_2 [i_0] [i_0]) * (var_11))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (622625138654977044LL) : (((/* implicit */long long int) var_3))))), (max((var_10), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)4] [i_1]))))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (+(arr_1 [i_1] [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_0])))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) min(((~(arr_0 [i_1 - 1]))), (((/* implicit */unsigned long long int) ((short) arr_0 [i_1 - 1])))));
                arr_8 [i_0] = ((unsigned short) (((+(var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        for (signed char i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            {
                arr_15 [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) (-(((max((var_11), (var_4))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_10)))))));
                arr_16 [i_2] [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_14 [i_2 - 2] [i_2] [i_2 - 3]))) ? ((+(arr_14 [i_2] [i_3] [i_3 - 3]))) : (((arr_14 [i_3 - 1] [(unsigned short)21] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                arr_17 [(short)22] [(short)22] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_2] [i_3] [i_3]))) ^ (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) : (1152780767118491648ULL))))) | (((/* implicit */unsigned long long int) (~(((int) var_9)))))));
                arr_18 [i_3] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_2 - 3]), (arr_9 [i_2 - 3])))) ? (((((/* implicit */_Bool) min((var_10), (var_4)))) ? (((var_8) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)-1), (((/* implicit */short) var_5))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) % (arr_11 [i_3])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((unsigned long long int) (signed char)-80));
    var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((var_0), (var_10))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64229))))), ((!(((/* implicit */_Bool) var_5)))))))));
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (9528297661136850034ULL))))))));
}
