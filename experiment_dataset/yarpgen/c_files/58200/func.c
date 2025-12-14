/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58200
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(572247920U))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) 3722719375U))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 572247901U)) || ((!(((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_0 + 2]))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)51)))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
    {
        var_16 = ((/* implicit */long long int) (unsigned char)7);
        arr_13 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3]);
        arr_14 [i_3] [i_3 + 1] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_10 [i_3])))), ((((!(((/* implicit */_Bool) arr_10 [i_3])))) ? (((/* implicit */int) arr_12 [i_3] [i_3])) : ((+(((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_9)))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (max((((18097800721464131988ULL) ^ (var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_1), (var_10)))))))))));
    var_19 = ((/* implicit */signed char) var_7);
}
