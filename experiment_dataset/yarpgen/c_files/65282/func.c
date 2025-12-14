/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65282
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_2] [(unsigned short)8] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)199))))) >= (18446744073709551615ULL))))));
                            arr_11 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_6 [i_0])))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))))) : (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_3 - 1] [i_0])))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 22; i_4 += 3) 
                {
                    arr_14 [i_4] [i_4] [i_4] = ((/* implicit */int) arr_8 [i_4]);
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_17 [i_4] [i_4 - 3] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_4 - 2] [i_4 - 2] [i_5] [i_4])) & (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (unsigned char)255))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) - (var_16)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)111))))))))));
                        arr_18 [i_4] [(_Bool)1] [i_1] [i_1] [1LL] [i_5] = ((/* implicit */unsigned long long int) (signed char)-70);
                        var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_8 [i_4]))))));
                        arr_19 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_6 [i_4]))) ? (8589934591LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [(unsigned char)4] [i_0] [i_4])))))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) 4142339423U))) * (((/* implicit */int) arr_9 [i_1] [i_4]))));
                        arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((var_0) >= (((/* implicit */long long int) arr_4 [i_4] [i_6]))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_4 - 3] [i_6 - 3] [i_6])) || ((_Bool)1))))));
                    }
                }
                for (short i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                    var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_0]))))) || (((/* implicit */_Bool) ((signed char) arr_13 [i_0]))));
                    var_22 = ((/* implicit */unsigned char) (~((+(((((/* implicit */int) (unsigned short)3241)) - (((/* implicit */int) (unsigned short)4442))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 152627872U)) ? (((/* implicit */unsigned long long int) -8589934608LL)) : (1ULL))) : (((((/* implicit */_Bool) (signed char)94)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned short)20510)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)105))))))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) (signed char)-52))));
}
