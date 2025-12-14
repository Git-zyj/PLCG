/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68425
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
    var_10 += ((/* implicit */unsigned char) var_0);
    var_11 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) var_8)))))) : (16070897321357907502ULL));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65524), (((/* implicit */unsigned short) (_Bool)1))))) ? (((unsigned long long int) 262143LL)) : (((/* implicit */unsigned long long int) (-(var_5))))))) ? ((((!(arr_4 [i_1] [i_1]))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))) : (13790930188135006940ULL)));
                    arr_9 [i_0] |= ((/* implicit */_Bool) max((3484442029U), (((/* implicit */unsigned int) ((signed char) (~(15728821532775254448ULL)))))));
                    var_13 *= ((/* implicit */unsigned long long int) ((short) (short)32767));
                    var_14 = ((/* implicit */signed char) ((((((_Bool) 1962183310187304417LL)) && (((/* implicit */_Bool) var_6)))) ? (min((((/* implicit */int) arr_4 [i_2] [i_2])), (var_7))) : (((/* implicit */int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
}
