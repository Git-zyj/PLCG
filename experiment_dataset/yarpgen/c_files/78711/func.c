/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78711
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
    var_11 -= ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_10))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_2] [(_Bool)0] [(unsigned short)8] |= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)-37)))), (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_0 [i_0]))))));
                    var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)155))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0]))))));
                    var_13 = ((/* implicit */unsigned long long int) (signed char)22);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) var_6);
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 1700722154U)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (var_1)))) ? (min((var_2), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)10939), (((/* implicit */unsigned short) (signed char)126))))))))));
    var_16 = ((/* implicit */unsigned char) var_2);
}
