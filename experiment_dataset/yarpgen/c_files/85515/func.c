/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85515
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
    var_16 = var_9;
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (unsigned char)29)), ((unsigned short)65533)))))) - (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (16776704)))) : (max((var_4), (((/* implicit */unsigned int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((_Bool) ((16776704) < (((/* implicit */int) (unsigned char)231)))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_1 [i_0]))));
                    var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [(unsigned char)4])) ? (((1712772530524919203ULL) & (((/* implicit */unsigned long long int) -16776705)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(signed char)6]))))) >> (((((((1859579819U) / (1148287252U))) | (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((arr_4 [3U]) - (7622033995507465888LL)))))))) - (2147483496U)))));
                    var_21 = ((/* implicit */int) arr_4 [i_0]);
                }
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */short) arr_5 [i_1]);
                    /* LoopSeq 1 */
                    for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        var_23 = min((((arr_8 [i_4 - 2] [i_3] [i_1]) - (((/* implicit */int) arr_1 [(_Bool)1])))), (var_13));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)145)) | (((/* implicit */int) arr_10 [i_0] [i_3] [(short)8] [i_4] [(short)8] [(short)8]))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) == (1712772530524919182ULL))))))) : (((((/* implicit */_Bool) arr_4 [i_4 - 2])) ? (((/* implicit */long long int) 16776709)) : (arr_4 [i_4 + 1])))));
                        var_25 = ((/* implicit */unsigned int) ((signed char) arr_4 [(_Bool)1]));
                        var_26 ^= ((/* implicit */unsigned char) min((((((((/* implicit */int) var_5)) << (((16776686) - (16776681))))) > (((/* implicit */int) ((var_4) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((((((/* implicit */_Bool) (signed char)100)) ? (var_7) : (((/* implicit */int) (unsigned char)111)))) < (var_7)))));
                        var_27 = ((/* implicit */unsigned int) (unsigned char)164);
                    }
                    var_28 -= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_2 [10LL] [(_Bool)1]))))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (min((((((/* implicit */int) (unsigned char)141)) + (16776698))), (((((/* implicit */_Bool) var_6)) ? (arr_8 [0] [i_1] [3]) : (((/* implicit */int) arr_6 [i_3] [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((unsigned short) (-2147483647 - 1)))) : ((~(((/* implicit */int) var_12))))))));
                }
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) -154759209)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) arr_6 [i_1] [i_0])) : ((~(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) (~(541922980)))) ^ (min((13458230124504759657ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                var_31 ^= ((/* implicit */unsigned short) (-(((unsigned int) (signed char)71))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)56)) ? (2147483647) : (16776700)));
                arr_12 [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_33 ^= ((/* implicit */unsigned char) ((int) 16776691));
}
