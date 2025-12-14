/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75901
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
    var_11 = var_10;
    var_12 = var_10;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-9001))))));
        var_14 = ((/* implicit */unsigned int) (short)-4535);
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */signed char) arr_2 [i_0]);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(-451698633)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)242))))) && (((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_0])))))) : (var_7)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2080)) >= (((/* implicit */int) var_1))))), (var_9)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((int) 0ULL))))) : (arr_2 [i_0])));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)7));
        }
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)249)) % (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_19 [i_2] [i_3] [i_2] [i_2] [i_5 - 1] [i_5] = ((/* implicit */signed char) ((int) max((((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) (unsigned char)128)))), (arr_11 [i_3 - 3]))));
                        var_17 = ((/* implicit */int) arr_16 [i_2] [i_2]);
                    }
                } 
            } 
        } 
    }
}
