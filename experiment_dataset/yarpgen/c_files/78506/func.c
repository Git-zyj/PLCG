/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78506
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) max((var_10), ((short)8498)));
        var_11 = ((/* implicit */_Bool) max((var_11), ((!(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) <= (13U)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (unsigned short)14772)), (var_7)))));
        var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28007))) : (15U))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3687941868916145838LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3172))))))) ? (((((/* implicit */int) (short)31592)) & (((/* implicit */int) (unsigned char)200)))) : (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 549414459448986704ULL))))) : (((/* implicit */int) (unsigned short)62378))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)4045)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 16775168U)))))));
                    var_13 -= ((/* implicit */unsigned int) ((unsigned short) ((_Bool) (_Bool)1)));
                    var_14 -= ((/* implicit */unsigned int) ((short) var_2));
                }
            } 
        } 
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max(((short)-10145), ((short)-16567))))));
    }
    for (short i_4 = 3; i_4 < 14; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) var_5);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_10 [i_4] [(unsigned char)6] [i_4]))));
        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25394))))) ? (max((((/* implicit */long long int) (short)-16564)), (arr_8 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 833526182U)))))), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-10140)))) - (var_7))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_0))));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    var_21 = ((/* implicit */signed char) ((35184371957760ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16775171U)) || (((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720)))))))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (((-(((int) var_1)))) << (((/* implicit */int) var_5)))))));
}
