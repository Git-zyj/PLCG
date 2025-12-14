/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99861
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [20LL] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 7898439031270931614ULL)) ? (((/* implicit */int) (unsigned short)62694)) : (((/* implicit */int) (unsigned short)2847)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)32045))))) : (max((((/* implicit */long long int) var_6)), (-3945019398072780239LL)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-3909)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1616))) : (-320681523102638455LL))))) : (min(((+(((/* implicit */int) (unsigned short)65535)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)52956)) : (((/* implicit */int) (unsigned short)62694))))))));
                    var_12 -= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                    var_13 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((short) (unsigned short)33488)))))));
                }
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(-1242500385)))))) ? ((+(((((/* implicit */_Bool) (unsigned char)148)) ? (-2542026201467842704LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62694))))))) : (((((/* implicit */_Bool) -3945019398072780239LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-3909)) ? (((/* implicit */int) (unsigned short)28792)) : (((/* implicit */int) (signed char)-8))))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3945019398072780228LL)))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)0);
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_3] [(unsigned short)12] [i_4] |= ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35563))) : (-434223428750321829LL));
                                arr_19 [i_1 + 3] [i_1 + 2] [i_1] = ((/* implicit */short) -2002888642);
                                var_15 = ((/* implicit */unsigned int) ((short) var_4));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) ((signed char) -2002888642))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_0)))))), ((((_Bool)1) ? ((~(((/* implicit */int) (unsigned char)107)))) : (((/* implicit */int) var_0)))))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned short)33488)))))));
}
