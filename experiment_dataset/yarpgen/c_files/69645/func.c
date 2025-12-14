/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69645
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = arr_1 [i_0];
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) (short)-32760))))), (((short) 7239730030979814118LL))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_0] [(short)1])) * (((/* implicit */int) (_Bool)0))))))) : (((unsigned long long int) (!(arr_6 [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_11 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1] [(signed char)10]))) : (var_4)))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [(unsigned char)1])) : (((/* implicit */int) arr_6 [i_2])))))) : (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_3)) & (var_17)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0]))) ? (16112333899978668582ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30080))))))));
                var_22 = ((/* implicit */signed char) (short)-32753);
            }
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (var_12)));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_3] [i_4] [9ULL] = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((-4574142875061656497LL) % (9223372036854775807LL))))));
                        var_25 = ((/* implicit */_Bool) (-((-(((((/* implicit */int) arr_2 [i_3])) * (((/* implicit */int) var_15))))))));
                        var_26 = ((/* implicit */unsigned long long int) arr_12 [i_0] [(signed char)9] [i_4]);
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) var_18))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (0)))) ? (max((((/* implicit */long long int) var_0)), (arr_4 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
            arr_26 [i_0] [i_0] [i_6] = ((/* implicit */signed char) min((min(((~(((/* implicit */int) arr_0 [i_6] [i_6])))), (((/* implicit */int) arr_13 [(short)2] [(short)2])))), (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_6 [i_6]))))))));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
        {
            var_27 += ((/* implicit */short) ((0) | (((/* implicit */int) (signed char)125))));
            arr_31 [i_7] = ((/* implicit */long long int) var_0);
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((long long int) max((var_5), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)(-32767 - 1))), (-732544013))))))))));
        }
        arr_32 [i_0] [i_0] = (-(((int) arr_14 [i_0] [i_0] [i_0] [i_0])));
    }
    var_29 = ((var_15) ? (((/* implicit */int) var_18)) : ((+(((/* implicit */int) var_1)))));
}
