/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58693
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (((~(10201951603760019769ULL))) << ((((-((~(10966769439438462924ULL))))) - (10966769439438462897ULL)))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_1] = max((((((/* implicit */int) (unsigned short)36533)) & (((/* implicit */int) (signed char)17)))), (((/* implicit */int) ((((/* implicit */int) (signed char)-18)) < (((/* implicit */int) (short)-1))))));
                        arr_14 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (~((~(((/* implicit */int) (unsigned char)240))))));
                    }
                } 
            } 
            arr_15 [i_1] = ((/* implicit */long long int) (signed char)-17);
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) << (((((((/* implicit */int) (short)-8750)) + (((/* implicit */int) (signed char)-16)))) + (8789))))))));
        }
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned short)23351), (((/* implicit */unsigned short) (_Bool)0)))))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */int) max(((unsigned short)46307), ((unsigned short)42184)))), ((~(2147483647)))));
    }
    var_14 = ((/* implicit */unsigned char) var_3);
}
