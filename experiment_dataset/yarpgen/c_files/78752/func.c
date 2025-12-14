/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78752
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) var_1);
        var_13 = ((/* implicit */unsigned long long int) ((arr_2 [i_0 + 2]) * (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (short)1918));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) -3391670410391076172LL))) || (((/* implicit */_Bool) 14110631408125566279ULL))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))));
            arr_10 [i_1] [i_2] = ((/* implicit */short) (-(var_2)));
        }
        arr_11 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) % (var_9)));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 4336112665583985331ULL))));
                        var_17 *= ((/* implicit */_Bool) (~(9223372036854775789LL)));
                    }
                } 
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */long long int) var_3);
        arr_24 [i_3] &= ((/* implicit */signed char) var_8);
        arr_25 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)34583)) == (((/* implicit */int) (unsigned short)26122)))))) / (arr_13 [i_3])));
        arr_26 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3] [i_3]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 4336112665583985363ULL)))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_4))))) ? (max((arr_16 [i_7] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)-17314)))) : (max((var_10), (14110631408125566253ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7])))));
        arr_31 [i_7] [i_7] = ((/* implicit */short) max((max((var_10), (((/* implicit */unsigned long long int) var_1)))), (((((((/* implicit */_Bool) (unsigned short)4215)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7025))) : (4336112665583985361ULL))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_10))) - (18446744073709548508ULL)))))));
    }
}
