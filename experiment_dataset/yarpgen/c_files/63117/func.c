/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63117
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((+(var_12))) : (((/* implicit */int) max((((/* implicit */short) (signed char)121)), ((short)-18073))))))));
                        var_16 = ((/* implicit */unsigned int) max(((~(((unsigned long long int) -970015407600343760LL)))), (((/* implicit */unsigned long long int) -970015407600343760LL))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */long long int) var_11)), ((((((~(970015407600343776LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_9)) - (67))))))))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((-970015407600343760LL) % (970015407600343776LL)))))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) 970015407600343788LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)100))) ? (((/* implicit */unsigned long long int) 2104930335U)) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) -970015407600343744LL)))))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_19 = ((/* implicit */short) (~(((int) max((((/* implicit */int) var_14)), (var_3))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1761353918403666569LL)))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (var_15))))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (var_15))) >> (((max((var_15), (((/* implicit */long long int) -707773398)))) + (707773420LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) var_2))))) ? (var_4) : (((/* implicit */int) var_14)))))));
    }
    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_19 [i_5] &= ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (970015407600343788LL))))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_6] = ((((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) == (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) var_7)) : (var_4))))) ? ((-(var_11))) : (((/* implicit */int) ((((/* implicit */long long int) min((3594836990U), (((/* implicit */unsigned int) var_3))))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-970015407600343772LL)))))));
            arr_24 [i_5] [i_6] [i_6] &= max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_3)))) : (((int) 567198607))))), (((((/* implicit */_Bool) var_11)) ? (var_0) : (-22941502075777716LL))));
        }
        var_21 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_4)), (var_0))), (((/* implicit */long long int) ((int) var_6)))));
        var_22 = var_10;
        arr_25 [i_5] [(_Bool)1] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) 1006771095)) ? (((/* implicit */long long int) 2314674015U)) : (9223372036854775807LL))), (4572410717581955061LL)))));
    }
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_14), (((/* implicit */signed char) ((_Bool) (unsigned short)64866)))))), (max((((/* implicit */unsigned int) -2103749465)), (3566379351U)))));
}
