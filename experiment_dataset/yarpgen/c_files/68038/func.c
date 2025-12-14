/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68038
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */int) (_Bool)1);
                    var_16 = ((/* implicit */long long int) (_Bool)1);
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_2 + 1])), (var_2)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((var_4) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_0))))))) > (max((((/* implicit */unsigned long long int) max((-7480613733801880340LL), (((/* implicit */long long int) (_Bool)1))))), (var_6)))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_14 [21] = ((/* implicit */unsigned short) ((signed char) (+(var_6))));
        var_18 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10813)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)44391)))))) > (((((/* implicit */_Bool) 1054923177)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5))))))));
        var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))) : (5949570902031382731LL)))) ? ((-(1290125038U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_10))))))))) && (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) || (((/* implicit */_Bool) (short)-14))))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) < (arr_11 [i_3]))))));
    }
    for (short i_4 = 3; i_4 < 18; i_4 += 2) 
    {
        var_21 -= (!(((/* implicit */_Bool) ((short) min((var_12), (((/* implicit */long long int) var_11)))))));
        var_22 -= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))) : ((-((-(var_13)))))));
        arr_19 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)54722)))))));
        arr_20 [12ULL] &= (~(var_12));
    }
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))), (var_8)));
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (5275263095129727507LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
