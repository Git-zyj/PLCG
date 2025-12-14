/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89387
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) max(((~(((/* implicit */int) min(((short)-5764), ((short)-5775)))))), ((-(((/* implicit */int) min(((short)3), (((/* implicit */short) arr_1 [i_0])))))))));
        var_13 = (_Bool)0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(max((3335784074085910284ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)18659)) : (((/* implicit */int) (_Bool)1))))));
                        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4882811357707167382ULL)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (10536356865097227721ULL) : (10536356865097227721ULL)));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)5753)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_0])) : ((-(((((/* implicit */_Bool) -15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_17 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_9)) ^ (-1979041388)))))));
}
