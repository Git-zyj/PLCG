/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87205
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
    var_13 = ((/* implicit */int) ((((/* implicit */int) var_6)) < ((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) var_12);
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((arr_3 [i_0 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))))), (arr_1 [i_0]))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (9223372036854775807LL)));
        arr_5 [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) max((-1476229517), (((/* implicit */int) (_Bool)1))))) : (var_9))))))));
                        var_17 += ((/* implicit */int) ((_Bool) min((((arr_3 [i_3]) << (((((/* implicit */int) var_4)) - (47))))), (((/* implicit */unsigned int) ((arr_0 [(unsigned short)17]) ? (1476229520) : (((/* implicit */int) var_3))))))));
                        var_18 = (((((_Bool)1) ? (1368472222286333416LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) >> (min((8352999562439117055ULL), (((/* implicit */unsigned long long int) (_Bool)0)))));
                        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_10)))) : (((var_0) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)42019)), (((unsigned int) 4U))))) ? (((long long int) ((((/* implicit */_Bool) arr_8 [8U] [8U] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))) < (3115099218U)))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) var_12);
        arr_15 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-1476229521) + (1476229538)))));
        /* LoopSeq 2 */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) (((_Bool)0) ? (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_4])), (9997582025335151574ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) << (((((/* implicit */int) var_4)) - (52)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [(signed char)20]))) : (var_10))))));
            var_23 |= var_8;
            var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) arr_12 [i_4] [(_Bool)1] [(_Bool)1] [14] [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */int) arr_7 [i_4] [i_4])) : (((/* implicit */int) (signed char)125))))))));
        }
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
        {
            var_25 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_3)) : (0))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
            var_26 *= ((/* implicit */unsigned long long int) arr_3 [i_4]);
            arr_22 [i_4] [(_Bool)0] [i_6] = ((/* implicit */int) arr_9 [i_4] [i_4] [(_Bool)1] [i_4]);
        }
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((var_0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3218289776U), (((/* implicit */unsigned int) (unsigned short)14722))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) var_11))))))))) | (min((max((((/* implicit */unsigned int) (signed char)-44)), (var_10))), (((/* implicit */unsigned int) -600620633))))));
}
