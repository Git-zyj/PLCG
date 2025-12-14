/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54980
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    var_15 *= max(((_Bool)1), ((_Bool)1));
                    arr_9 [i_0] [(signed char)5] [i_0] = ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)24119)) : (((/* implicit */int) (_Bool)1))));
                    arr_10 [i_0 - 1] = arr_0 [i_0] [i_0];
                }
                for (short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    arr_13 [i_3] = ((/* implicit */long long int) var_5);
                    arr_14 [i_0] [i_0] [(_Bool)1] = ((/* implicit */long long int) var_5);
                }
                arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) (signed char)-16)) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_0] [(short)10] [i_1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4232599912376825700LL)) ? ((~(max((((/* implicit */long long int) var_2)), (4232599912376825700LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5])))));
                    var_17 = ((/* implicit */unsigned short) var_11);
                    var_18 = ((/* implicit */unsigned char) ((unsigned short) var_5));
                }
            } 
        } 
    } 
}
