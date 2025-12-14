/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74734
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (var_8) : (var_7))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)88)) | (((/* implicit */int) var_15)))))))), (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_8 [4ULL] [i_1] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 + 3] [i_2] [(short)18] [(short)18])))), (((/* implicit */int) arr_8 [i_3] [14ULL] [i_1] [i_0])))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((int) arr_7 [i_0] [i_0 - 2] [i_0] [i_0 + 2])) == (((/* implicit */int) (unsigned short)64)))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) min((((((/* implicit */int) var_9)) & (((/* implicit */int) arr_4 [i_3] [i_3])))), (((/* implicit */int) min((arr_0 [i_3]), ((signed char)-82))))))), (max((((/* implicit */long long int) (signed char)72)), (max((-7477848140781375176LL), (((/* implicit */long long int) (unsigned char)28)))))))))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_23 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) (unsigned char)35))) ? (((/* implicit */long long int) 959940444U)) : (min((((/* implicit */long long int) (_Bool)1)), (8748647505144170284LL))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (576460752286646272LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24576))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 354456412U)))))))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23048)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), ((short)23049))))) : (2564261746206102887ULL))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_0 [(unsigned short)10])), (6433010487465339050LL))), (((/* implicit */long long int) max((arr_11 [i_0] [(unsigned short)10] [i_0 + 3]), (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) : (((2688573927U) << (((3940510883U) - (3940510883U))))))))));
    }
}
