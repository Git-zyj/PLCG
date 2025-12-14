/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80953
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-74)) ? (2587261362U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))));
                arr_6 [i_0] [i_0] [i_1] = max((((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_4 [i_1])))) >= (((/* implicit */int) ((signed char) var_9)))))), (max((max((((/* implicit */unsigned short) arr_4 [i_1])), ((unsigned short)65510))), ((unsigned short)65510))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_14 [i_2 - 1] [i_2] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_4 + 2])))))))));
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) 35495814U)) : (0ULL))))) ? (((arr_12 [i_2 - 1] [i_2 - 1]) ^ ((~(64675679))))) : ((+(((/* implicit */int) (unsigned short)26))))));
                    var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)242)))), (((/* implicit */int) arr_7 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_3)) : (arr_9 [i_3] [i_3])))) ? (((((/* implicit */unsigned int) -1)) + (3415635465U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_3] [(signed char)20] [i_4])) ^ (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13791)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        arr_17 [i_2] = ((/* implicit */long long int) ((((arr_8 [i_2 - 1] [i_2]) >= (arr_8 [i_2 - 1] [i_2]))) ? (((/* implicit */unsigned long long int) arr_10 [i_2 - 1])) : (max((11777075234758058064ULL), (((/* implicit */unsigned long long int) arr_15 [i_2 - 1] [i_3] [i_4] [i_5]))))));
                        arr_18 [i_2] [(short)2] [i_2] [18LL] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)102))))) != (min((((/* implicit */long long int) (short)32750)), (var_2)))))) ^ (((((/* implicit */int) arr_13 [i_2 - 1] [i_4 + 1] [i_2])) ^ (arr_10 [i_2 - 1])))));
                        var_12 = ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25724))) : (4259471482U));
                    }
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_16 [(_Bool)1] [i_3] [16U] [i_3] [i_3]))));
                }
            } 
        } 
    } 
}
