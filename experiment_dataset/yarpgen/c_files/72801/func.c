/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72801
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
    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)46827)), (16602481982318894613ULL))) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_3))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+((+(max((var_6), (((/* implicit */unsigned long long int) arr_1 [1U]))))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (unsigned short)55125))))) ? (((/* implicit */unsigned long long int) 2080120212U)) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) 3325048693U)) : (12113057855336374124ULL))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_0 [i_0])))), (max((((/* implicit */int) (signed char)80)), (1189128936)))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((902410152), (((/* implicit */int) (unsigned short)10424))))), (((unsigned long long int) var_9))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3325048693U)) ? (((unsigned int) (_Bool)0)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((unsigned long long int) (+(((/* implicit */int) (unsigned short)10411))))) : (((/* implicit */unsigned long long int) var_2))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_15 += ((/* implicit */unsigned char) max((((arr_8 [i_4 - 1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (var_12))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_4 + 1] [i_2])))))));
                        var_16 = ((/* implicit */unsigned char) max(((~((-(((/* implicit */int) (short)2572)))))), (((/* implicit */int) var_1))));
                        arr_16 [i_1] [i_1] [(unsigned char)7] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 + 1]))))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-11)) ? (var_10) : (((/* implicit */long long int) arr_4 [i_3])))), (max((((/* implicit */long long int) (unsigned short)18177)), (7458887078721522936LL))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2573)))))));
    }
    var_19 -= ((/* implicit */unsigned int) var_1);
}
