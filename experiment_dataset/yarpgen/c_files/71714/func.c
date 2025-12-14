/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71714
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_8))));
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (524287U)))) ? (((/* implicit */long long int) ((1325090814U) - (4294443009U)))) : (-2251368022236218376LL))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((524291U), (var_6))))))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (4294443009U)));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) 967485557)), (4294443009U)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */int) (unsigned char)234)) : (1549315680)))) : (4192425680U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220))) : (7496602417720243390LL))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)106)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)100)) ? (arr_3 [i_2] [i_1 - 1]) : (((/* implicit */int) var_1))));
                    var_18 = ((int) arr_3 [i_1 - 2] [i_1]);
                    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) | (var_3)))) ? (((/* implicit */int) (short)3584)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) >= (2119677593767550375ULL))))))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) var_4);
                    arr_15 [i_0] [(unsigned short)10] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-67))) == (524285U)));
                    var_21 = ((/* implicit */unsigned char) (~(min((15), ((-(((/* implicit */int) var_12))))))));
                    var_22 = ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (min((((unsigned int) arr_8 [(unsigned char)7] [(unsigned char)17] [i_0] [i_0])), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned int) (-(var_4)))));
                }
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_18 [i_0] [i_1] = ((/* implicit */long long int) ((_Bool) (signed char)101));
                    arr_19 [i_4] [(unsigned char)15] [i_4] [i_4] = ((/* implicit */int) ((((int) 1549315696)) >= (((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)-110)) ? (2435018289U) : (((/* implicit */unsigned int) 2008588634))))));
                    var_24 = (+(524287U));
                }
                var_25 = ((/* implicit */unsigned int) (+((~(min((((/* implicit */int) var_12)), (arr_3 [(signed char)13] [i_0])))))));
            }
        } 
    } 
}
