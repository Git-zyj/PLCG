/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88698
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
    for (short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) arr_1 [i_1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)101)) >= (((/* implicit */int) arr_3 [i_1] [7] [i_0]))))), (((((/* implicit */_Bool) 17225100124809235303ULL)) ? (1221643948900316302ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63670))))))) > (((/* implicit */unsigned long long int) (~(arr_4 [i_0 + 1] [i_0 + 1]))))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((signed char) (_Bool)1)))));
                var_12 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) || (((/* implicit */_Bool) ((long long int) 17225100124809235303ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((_Bool) arr_9 [i_2] [8LL])))))));
                var_14 = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_3]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_7))));
                arr_18 [i_4] [i_5] = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4])), (var_4))), (((/* implicit */unsigned long long int) ((int) 1221643948900316312ULL))))), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [3ULL] [3ULL]))) / (1035043190550931235ULL)))))));
                arr_19 [(signed char)2] [(signed char)2] = ((/* implicit */short) min((((/* implicit */long long int) ((17225100124809235296ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_8 [i_5] [i_5]), (((/* implicit */unsigned short) (signed char)-115))))))))), (((long long int) (_Bool)1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_9)))) / (((((/* implicit */_Bool) var_5)) ? (17225100124809235303ULL) : (var_8)))))));
    var_17 = ((/* implicit */unsigned char) var_2);
}
