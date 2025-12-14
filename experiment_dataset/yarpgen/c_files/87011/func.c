/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87011
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < ((+(((/* implicit */int) (short)26711))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) (signed char)0))))) : ((+(882870897U)))))) - ((+(-8207788241834975536LL)))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (unsigned short)50853);
    var_13 = (_Bool)1;
    var_14 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)-7887)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6658)) ? (((/* implicit */int) (unsigned short)3911)) : (((/* implicit */int) (short)-32760))))))));
}
