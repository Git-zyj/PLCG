/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89854
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
    var_14 = ((/* implicit */long long int) (unsigned short)47637);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((17U), (((/* implicit */unsigned int) var_13))))))))));
                    arr_11 [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((-(-1LL))))), (((/* implicit */long long int) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-21471))))))))));
                }
            } 
        } 
        var_15 &= ((unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_16 += ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) max((6777272191792795788ULL), (((/* implicit */unsigned long long int) -13LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(-3348315423114484617LL)))) ? (((((/* implicit */_Bool) arr_7 [0LL])) ? (1505846217032227788LL) : (-1505846217032227799LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))))))));
                        var_17 = ((/* implicit */unsigned int) min((-1505846217032227783LL), (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_4])))))));
                        var_18 = ((/* implicit */unsigned short) (-(min((arr_18 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]), (((/* implicit */long long int) (short)-15762))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_19 = (+(((((/* implicit */_Bool) arr_25 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6 - 2] [i_6 - 1]))) : (arr_25 [i_6 + 2] [i_7]))));
                        var_20 = min(((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_13 [i_7]))))) : (((/* implicit */int) arr_7 [i_8])))), (((/* implicit */int) var_1)));
                        var_21 = ((/* implicit */signed char) (short)26074);
                    }
                } 
            } 
        } 
        arr_29 [i_6] = (+(arr_15 [16] [(unsigned char)10] [i_6 - 1]));
    }
}
