/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88789
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
    var_15 &= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned char)1] &= -7041811066133181166LL;
                    arr_8 [i_0] [i_1] [i_2 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_2]))))))))) * (15032385536LL)));
                    var_16 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)152)))))) ^ ((~(arr_3 [i_0 - 1])))));
                    var_17 = ((/* implicit */short) min(((~(((arr_6 [(signed char)5] [i_1] [(signed char)5] [i_2]) | (((/* implicit */long long int) ((/* implicit */int) var_13))))))), (((/* implicit */long long int) (+(376023027))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            {
                arr_14 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_3])) + ((((!(((/* implicit */_Bool) (unsigned char)123)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105))))) : (((/* implicit */int) (unsigned short)1))))));
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 12; i_5 += 2) 
                {
                    arr_18 [i_3] [i_4] [i_4] [5LL] = var_3;
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((5U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)5149)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))), (((long long int) (!((_Bool)1))))));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) % (var_5)))) + (min((274877906943ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                }
            }
        } 
    } 
}
