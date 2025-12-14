/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8799
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
    var_18 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (-(var_4)));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_2])) == (((/* implicit */int) arr_2 [i_1])))))))) ? (max((17337584680282246173ULL), (2660126055955520093ULL))) : (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) -892408660503034482LL)) : (10775225797810254007ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    arr_11 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7671518275899297608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 10775225797810254009ULL)) ? (10775225797810253995ULL) : (10775225797810253987ULL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -1374964328)))) & (475789702649250788ULL)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((-(7671518275899297621ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_9 [i_0]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_19 [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max(((signed char)-121), (var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (10775225797810253987ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((unsigned int) var_11))))));
                                var_22 = ((/* implicit */long long int) ((unsigned short) var_16));
                                var_23 -= (~(var_8));
                            }
                        } 
                    } 
                    arr_20 [i_5] [i_1] = ((/* implicit */int) var_8);
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    arr_24 [i_8] [i_1 - 1] [13ULL] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2887809293U)) ? (-1374964318) : (1501915484)));
                    var_24 *= ((/* implicit */unsigned short) ((short) ((_Bool) ((((/* implicit */_Bool) 1244343132444905014ULL)) ? (10775225797810253994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_25 [i_0] [i_8] [i_1] [i_0] = max((((/* implicit */int) arr_22 [i_1] [i_8])), (((int) (+(((/* implicit */int) var_3))))));
                }
                var_25 += ((((/* implicit */_Bool) var_10)) ? ((+(arr_15 [i_1] [(_Bool)1] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) ((17094650016251918480ULL) + (((/* implicit */unsigned long long int) var_5)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        for (int i_10 = 2; i_10 < 19; i_10 += 2) 
        {
            {
                arr_31 [i_9] = ((((/* implicit */_Bool) 7671518275899297621ULL)) ? ((-(7671518275899297608ULL))) : (((/* implicit */unsigned long long int) max((min((var_5), (var_2))), (min((((/* implicit */unsigned int) (signed char)-124)), (0U)))))));
                var_27 = ((/* implicit */unsigned short) max((15060640825577510722ULL), (((/* implicit */unsigned long long int) (unsigned short)992))));
                var_28 = ((/* implicit */unsigned char) arr_27 [i_9]);
                var_29 = ((/* implicit */unsigned int) ((unsigned short) 10775225797810254007ULL));
            }
        } 
    } 
}
