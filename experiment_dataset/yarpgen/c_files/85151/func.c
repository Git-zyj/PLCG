/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85151
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
    var_10 = (+(((/* implicit */int) var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) var_9);
        var_12 *= ((/* implicit */_Bool) arr_0 [8]);
        var_13 = ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1641786429) ^ (((/* implicit */int) ((unsigned char) 3142414399937725588ULL)))))) && (((/* implicit */_Bool) ((signed char) arr_3 [i_4] [i_2])))));
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (+(-1635920913)));
                    }
                } 
            } 
        } 
        var_15 = ((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-107)) : (-1641786429))) & ((+((~(((/* implicit */int) (_Bool)0)))))));
        var_16 = ((/* implicit */signed char) min(((-(-181058817))), (((/* implicit */int) ((unsigned char) (+((-2147483647 - 1))))))));
    }
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (max(((+(var_4))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
}
