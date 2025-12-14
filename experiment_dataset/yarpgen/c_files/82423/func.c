/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82423
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116))))))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_10)))))));
    var_21 = ((/* implicit */signed char) (~(var_1)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (+(min(((+(((/* implicit */int) (unsigned char)5)))), (((/* implicit */int) (short)9738))))));
                        arr_10 [10ULL] [i_1] [i_3 + 2] &= ((/* implicit */unsigned char) (((~(0ULL))) > (((/* implicit */unsigned long long int) (~(4501008620565133699LL))))));
                        var_23 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) max(((unsigned short)0), ((unsigned short)65522))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((unsigned int) min(((~(((/* implicit */int) (short)-25560)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8)) && (((/* implicit */_Bool) (unsigned short)0))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                var_25 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) 18)), ((~(min((8307174188818061207ULL), (((/* implicit */unsigned long long int) (unsigned short)38566))))))));
                var_26 -= ((/* implicit */short) ((int) (~(((/* implicit */int) (unsigned short)65530)))));
                arr_14 [i_0] [i_1] [i_0] = (-(max((((/* implicit */int) min(((unsigned short)65500), ((unsigned short)65526)))), ((-(((/* implicit */int) (unsigned short)24)))))));
                arr_15 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14499222504210331998ULL)) ? (2153617394U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))))) ? ((-(max((((/* implicit */unsigned int) (unsigned short)17)), (2802126327U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))));
                arr_16 [i_0] [(unsigned short)6] [i_0] = (((-(((/* implicit */int) (unsigned short)65507)))) != (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))))));
            }
            arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(-1459228958)))));
        }
        var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23)))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)251)) * (((/* implicit */int) (signed char)-4)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        arr_21 [18] [(unsigned char)16] &= ((/* implicit */unsigned long long int) ((unsigned int) ((134217727) / (((/* implicit */int) (unsigned short)65535)))));
        arr_22 [i_5] = ((/* implicit */signed char) ((unsigned int) (short)27774));
    }
}
