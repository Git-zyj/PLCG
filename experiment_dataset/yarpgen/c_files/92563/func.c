/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92563
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
    var_11 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
            arr_7 [i_0] = ((/* implicit */unsigned short) var_5);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
                        arr_15 [2U] [i_1] [i_2] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (1674090299U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_3) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7682618808886963704LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)63059))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) : (1700239931U)))));
            arr_20 [i_0] = ((/* implicit */int) ((((((((/* implicit */int) var_0)) < (((/* implicit */int) arr_11 [7] [i_4] [i_4] [i_0] [i_4])))) ? (((/* implicit */long long int) arr_1 [i_4])) : (var_5))) == (((/* implicit */long long int) var_4))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        arr_27 [i_6] [8] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-7682618808886963705LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 161399845)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-63)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
                        arr_28 [i_7] [i_6 - 1] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (465380385U)))) ? (2280658525U) : (((/* implicit */unsigned int) 65528)))) / (var_4)));
                        arr_29 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_7])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1274549381)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (2280658539U)))))))));
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 7682618808886963704LL)) ? (8926757598396399343LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
                        arr_30 [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 2367303835U)) ? (5519707911228969651ULL) : (((/* implicit */unsigned long long int) 79645959)))));
                    }
                } 
            } 
            arr_31 [i_0] [i_5] = ((/* implicit */_Bool) arr_1 [i_0]);
            arr_32 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_5]))))) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0])))))));
            arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))));
            arr_34 [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2701)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) : (2280658527U))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_10))))))));
        }
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            arr_37 [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_0);
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_8] [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_8] [i_8 + 3] [i_0])) : (arr_9 [i_0] [i_8] [i_8])));
            arr_38 [i_0] [i_8 - 1] [i_8] = ((/* implicit */unsigned int) arr_21 [i_0] [(_Bool)1] [(_Bool)1]);
            arr_39 [i_0] [i_8] [i_0] &= ((/* implicit */unsigned short) var_1);
        }
        arr_40 [i_0] = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
}
