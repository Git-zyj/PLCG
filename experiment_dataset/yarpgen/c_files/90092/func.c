/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90092
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
    var_16 = ((/* implicit */unsigned short) ((((max((-8839895597549814392LL), (((/* implicit */long long int) 156948298)))) % (((/* implicit */long long int) ((/* implicit */int) var_2))))) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)42750)))) & ((~(3150827110U))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned char) max((min((min((3150827110U), (1388164992U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))))), (((unsigned int) min((((/* implicit */unsigned int) (short)0)), (3150827110U))))));
                                var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1120452436)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16554400159159608168ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) (signed char)23))))));
                                arr_14 [i_0] [i_0] [0U] [i_0] [i_0] [0U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((int) 18446744073709551615ULL)), (((/* implicit */int) (short)8055))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) 2906802303U))), (270589370)))) : (((((67108864U) & (((/* implicit */unsigned int) -1120452436)))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */_Bool) (short)0);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (short)-2365)))))) != (((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 18; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            {
                arr_20 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) && ((_Bool)1)))), ((unsigned short)65535)))), (((-8796468895843312974LL) & (((/* implicit */long long int) 4294967295U))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    arr_23 [i_7] [i_6] [i_6] = ((/* implicit */short) (~(((unsigned long long int) (signed char)6))));
                    var_21 = ((/* implicit */_Bool) ((int) max((-1810702228), (((/* implicit */int) (unsigned short)65535)))));
                    var_22 = ((/* implicit */signed char) max((((min((3628247948U), (38475619U))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (short)23577)))))))), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) (signed char)(-127 - 1))), (-688949801)))))));
                }
                arr_24 [i_5] [i_5 - 3] = ((min((-775916082), (1953281806))) * ((+(((/* implicit */int) (_Bool)0)))));
                var_23 = ((/* implicit */long long int) ((max((max((((/* implicit */unsigned int) (signed char)-62)), (0U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))))) >> (max((((0) / (179391859))), (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_24 |= min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) max((4038325731211288582ULL), (((/* implicit */unsigned long long int) (short)32767))))));
}
