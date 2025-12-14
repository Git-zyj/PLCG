/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8397
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
    var_12 = ((max((3434866464U), (((/* implicit */unsigned int) -1940977165)))) << (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (((long long int) var_3))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (+(-1940977177))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (short)-11152);
                    var_15 &= (~(((3791183111U) << ((((~(var_6))) - (1882377379U))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1940977156) / (-1940977147)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))))))))));
    }
}
