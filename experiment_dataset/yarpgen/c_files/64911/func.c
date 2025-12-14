/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64911
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
    var_14 = var_11;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_8))))))));
                    var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) & (-447145467263609248LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_8 [i_3] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))))));
                    var_18 ^= ((/* implicit */_Bool) (~((~((~(((/* implicit */int) var_12))))))));
                    var_19 = ((((/* implicit */int) (((~(var_9))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))))) == ((+((~(-1866930640))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_18 [i_6] = var_1;
                                arr_19 [i_3] [(unsigned char)16] [i_5] [i_6] [i_3] |= ((/* implicit */_Bool) (+((+(58233806)))));
                                arr_20 [i_3] [i_4] [i_5] [i_6] [(_Bool)1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_3] [(unsigned short)8]))))));
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_7)))))))));
                                var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_6 [i_6] [18U])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 16; i_8 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_23 [2U]))));
        var_22 = ((/* implicit */unsigned int) arr_13 [i_8] [i_8]);
        arr_24 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -58233806)))))));
        var_23 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)255))))));
    }
    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!((_Bool)1)))) << (((((/* implicit */int) var_1)) - (171)))))));
}
