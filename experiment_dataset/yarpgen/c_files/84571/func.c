/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84571
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
    var_12 = ((/* implicit */long long int) (short)31784);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-31790)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)-25540)))))))) : (((/* implicit */int) (short)-380))));
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+((-(((((/* implicit */int) (short)-1)) + (((/* implicit */int) (short)-6078))))))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_11 [i_0] = (short)31784;
            var_13 = ((/* implicit */long long int) ((unsigned short) (unsigned char)138));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) min(((unsigned short)25483), ((unsigned short)32097)))), ((+(arr_3 [i_0 - 1] [i_0])))));
            arr_13 [9] [i_0] = ((/* implicit */short) ((signed char) min((min((arr_8 [i_0] [i_0]), (((/* implicit */int) (short)16382)))), (((/* implicit */int) (short)-3203)))));
        }
        for (short i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)32767)) ? (8130964315017854991LL) : (-1989869984052516940LL)))));
            var_14 ^= ((/* implicit */short) 6031689562230228167ULL);
        }
        for (short i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
        {
            arr_19 [i_0] [i_4] [i_0] = ((/* implicit */short) ((_Bool) ((signed char) 2113929216U)));
            var_15 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_1 [i_4 - 1]))), (((((unsigned long long int) (signed char)124)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_4] [i_0 + 2]))))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1810058500)) ? (((/* implicit */int) (short)-9530)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)-7039))) >= (((/* implicit */int) ((short) (short)(-32767 - 1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((long long int) (short)(-32767 - 1)))))))));
        }
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max(((-(var_11))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)34))))))))));
    }
    for (int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */long long int) ((signed char) ((int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)(-32767 - 1)))))));
        arr_24 [i_5] = 2181038079U;
    }
    var_18 = ((/* implicit */long long int) min((var_18), ((-(min((((var_11) << (((6647886574947503154LL) - (6647886574947503150LL))))), (((/* implicit */long long int) var_1))))))));
}
