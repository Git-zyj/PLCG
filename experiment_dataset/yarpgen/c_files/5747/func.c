/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5747
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) (unsigned short)33337)) >> (((/* implicit */int) ((384803273U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27152))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)51724)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) max(((unsigned short)8980), ((unsigned short)32198)))))))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) 3418131217U)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [i_0]))))))) < (((/* implicit */int) (!(((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned char)115)))))))));
                }
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min(((unsigned short)11663), (((/* implicit */unsigned short) (unsigned char)59)))), (((/* implicit */unsigned short) var_9)))))) : (var_5)));
}
