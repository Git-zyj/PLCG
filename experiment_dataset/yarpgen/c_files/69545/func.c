/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69545
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
    var_10 &= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (+(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (var_2)))) ? (((/* implicit */int) ((signed char) -1749043748))) : (((((/* implicit */int) (unsigned char)81)) + (-1749043748)))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (+((+(var_5)))));
                        arr_12 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)174))))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)196))))));
                        arr_13 [(_Bool)1] [(_Bool)1] [7U] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)183))));
                    }
                    var_12 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)25470)), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1584402064U))))), (-3834098003785658765LL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) (-((+(var_8)))));
    var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))), ((+((-(((/* implicit */int) var_1))))))));
}
