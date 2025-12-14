/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64552
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
    var_10 = ((/* implicit */short) ((unsigned int) max((((((/* implicit */_Bool) 1873716081U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (3037142596906321288ULL))), (15409601476803230340ULL))));
    var_11 += ((/* implicit */unsigned int) (signed char)54);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7218229843190368404LL)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) : (15409601476803230340ULL))) <= (0ULL))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_0] [i_0] &= ((/* implicit */signed char) ((long long int) max((15409601476803230340ULL), (((((/* implicit */unsigned long long int) 7218229843190368404LL)) | (15409601476803230323ULL))))));
                        arr_12 [i_0] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */unsigned long long int) var_2);
                        var_12 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (unsigned short)22033)), (arr_1 [i_0] [i_3])))));
                        var_13 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)40), (((/* implicit */unsigned char) (signed char)-73)))))) : (max((arr_4 [14] [i_2] [(short)6]), (((/* implicit */long long int) (unsigned char)192))))))), (max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])), (((arr_3 [i_2] [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69)))))))));
                    }
                } 
            } 
        } 
        var_14 *= ((/* implicit */_Bool) 10752377010103524620ULL);
        var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_5 [i_0] [i_0] [(unsigned short)20] [i_0])), ((short)2338)))), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)69))))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 511ULL)) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) (signed char)-73)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_5)) == (((/* implicit */int) var_8)))))))) : (max((((((/* implicit */_Bool) (signed char)-54)) ? (10230618152777880479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25582))))), (min((((/* implicit */unsigned long long int) var_2)), (var_7)))))));
}
