/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57073
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)82))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_1] [i_0] [i_0] = ((/* implicit */short) (signed char)118);
                        var_16 += ((/* implicit */unsigned char) min((arr_4 [i_3] [i_1 - 2] [i_2]), (((((/* implicit */_Bool) (~(arr_4 [i_3] [i_1 - 2] [i_3])))) ? (((/* implicit */int) (signed char)-118)) : (((arr_4 [i_3] [i_2] [i_3]) ^ (((/* implicit */int) (unsigned short)56457))))))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 262979760))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_0 [i_4]);
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(var_0))))));
        }
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */short) var_9);
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)118)) << (((8795019280384ULL) - (8795019280371ULL)))))) ^ (arr_14 [i_5] [i_5])));
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-19199))));
    }
}
