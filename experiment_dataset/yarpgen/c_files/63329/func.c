/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63329
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (signed char)-88))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_19 ^= ((/* implicit */short) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (arr_1 [i_1])));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-4081191487165455882LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (1817795430) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (~(var_14)));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((16385099398000487927ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2] [i_2])))))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) arr_0 [i_0]))))), (arr_1 [i_2]))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) max((arr_2 [i_0]), ((signed char)87))))))) ? ((~(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (11163795289762987696ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16))))))));
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21808)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-119))));
        var_24 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((((/* implicit */_Bool) (unsigned char)62)) ? (1752645993U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) | (((/* implicit */int) arr_5 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_25 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) <= (((/* implicit */int) var_5)))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    var_26 = ((/* implicit */int) var_14);
}
