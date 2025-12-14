/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76794
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_5)))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_11)))))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) == (((/* implicit */int) (unsigned char)209)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)-5331)) && (((/* implicit */_Bool) (short)-32748))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((((/* implicit */short) var_8)), (var_5))))) > (((/* implicit */int) ((short) min((((/* implicit */long long int) var_13)), (var_7)))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_4))))) == (((((/* implicit */long long int) ((/* implicit */int) var_12))) - (var_7))))))) - (((((long long int) var_14)) >> (((((/* implicit */int) min(((signed char)-94), ((signed char)-91)))) + (107)))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((min((((/* implicit */int) ((signed char) (short)-32761))), ((-(((/* implicit */int) (unsigned char)245)))))), (((((/* implicit */int) ((((/* implicit */_Bool) 4474393274796436921LL)) && (((/* implicit */_Bool) (short)-29295))))) + (((/* implicit */int) ((short) (signed char)-95))))))))));
                    var_23 += ((/* implicit */short) var_1);
                }
            } 
        } 
    }
    for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) ((min((min((var_0), (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_15))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) min((3875190392946666708LL), (-8334746810111591984LL))))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((/* implicit */long long int) var_14)), (min((((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_7))), (((/* implicit */long long int) ((short) var_13))))))))));
        var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)181)) <= (((/* implicit */int) (short)3248))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */int) var_6)) - ((((-(((/* implicit */int) var_14)))) + (((/* implicit */int) var_10))))));
        var_28 += ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (((long long int) var_14)))))));
        var_29 &= ((/* implicit */long long int) var_13);
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((min((((/* implicit */long long int) var_10)), (var_11))) / (((/* implicit */long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_10))))))) > (((/* implicit */long long int) ((/* implicit */int) min((var_4), (((signed char) var_7)))))))))));
    }
    var_31 = ((/* implicit */signed char) (((((~(var_3))) ^ (min((((/* implicit */long long int) var_5)), (var_3))))) * (((min((((/* implicit */long long int) var_14)), (var_11))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_11))))))));
}
