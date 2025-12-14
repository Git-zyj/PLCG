/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80798
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (short i_4 = 4; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) -1679811824);
                            var_18 = ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (_Bool)1)));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)75)) ? (-1723806227) : (((/* implicit */int) ((unsigned char) 329172723U)))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)19666)) : (((/* implicit */int) (signed char)-29))));
            var_21 = ((/* implicit */unsigned char) ((int) (((_Bool)1) ? (2265834694U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))))));
        }
        var_22 = -1723806227;
        /* LoopSeq 1 */
        for (unsigned char i_5 = 4; i_5 < 11; i_5 += 4) 
        {
            var_23 = ((/* implicit */int) (_Bool)1);
            var_24 = ((/* implicit */unsigned char) -791903359);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (-173042166)))) && (((/* implicit */_Bool) max((1414167702), (((/* implicit */int) (unsigned char)35))))))))));
        }
        var_26 += min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (short)-28135)) : (((/* implicit */int) (unsigned char)85)))), (((/* implicit */int) (short)26462)));
    }
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -424947153)) ? (((/* implicit */int) (unsigned char)11)) : (156025338))), (((/* implicit */int) (signed char)34))));
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (1515760499U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194)))))) ? (((/* implicit */unsigned int) -2147483632)) : (135207789U)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) max(((-(var_6))), ((-(var_9)))));
}
