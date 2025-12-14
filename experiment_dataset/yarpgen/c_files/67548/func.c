/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67548
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
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = (~(((int) ((((/* implicit */int) (signed char)59)) | (2007688074)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_16 = (~((~((~(((/* implicit */int) (short)(-32767 - 1))))))));
            var_17 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned char)186)) & (((/* implicit */int) ((((/* implicit */int) var_1)) < (var_11)))))), (((/* implicit */int) var_7))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) -2007688104);
            var_19 &= ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
            var_20 = ((/* implicit */unsigned char) (+(min(((-2147483647 - 1)), (((/* implicit */int) (short)10357))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max((((signed char) var_0)), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))))))));
            var_22 = ((/* implicit */short) (unsigned char)255);
        }
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) ((_Bool) var_5)))))) == ((~(((var_13) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)16005)) % (((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) var_4)) & (((/* implicit */int) var_10)))))))) / (((((((/* implicit */_Bool) var_11)) ? (var_9) : (var_12))) * (((/* implicit */unsigned int) var_0))))))));
                var_24 |= max((((unsigned long long int) (short)-10358)), (((/* implicit */unsigned long long int) ((536608768) == (536608768)))));
            }
            for (signed char i_5 = 3; i_5 < 19; i_5 += 2) 
            {
                var_25 |= ((/* implicit */short) (-(((/* implicit */int) var_4))));
                arr_18 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */short) var_1);
                var_26 = ((/* implicit */unsigned long long int) var_9);
            }
            arr_19 [i_0] = ((/* implicit */signed char) (short)2227);
            var_27 = ((/* implicit */_Bool) ((signed char) 11358351405714297687ULL));
            arr_20 [i_0] = ((/* implicit */unsigned long long int) var_6);
        }
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            var_28 = (((+(((/* implicit */int) var_7)))) + ((+(((/* implicit */int) var_6)))));
            var_29 = ((/* implicit */_Bool) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
            var_30 *= ((/* implicit */short) var_3);
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            var_31 = ((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) * (((/* implicit */int) ((((/* implicit */int) (short)14494)) < (((/* implicit */int) var_1)))))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(((/* implicit */int) var_10)))))));
            var_33 = ((/* implicit */int) var_7);
        }
    }
}
