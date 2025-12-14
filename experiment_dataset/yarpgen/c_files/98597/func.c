/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98597
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)46815))))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-1024))))) <= (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32638))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_1 [(unsigned char)8])) * (((/* implicit */int) var_13)))))) : (((/* implicit */int) (unsigned char)23)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (short)-5020)), (939524096)));
                        var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) var_0))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_3)), (-64))), ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_0]))))))) ? (((/* implicit */int) (((((_Bool)1) ? (-569247623) : (var_11))) == (((((/* implicit */_Bool) (short)28236)) ? (((/* implicit */int) arr_3 [i_0] [i_3])) : (((/* implicit */int) var_8))))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_0])) > (((/* implicit */int) var_1)))))));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (unsigned short)51164);
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */short) var_8);
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (short)-30393)) : ((-(16777208))))), (((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_2))))));
}
