/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68424
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 ^= ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (+(975842632667791060LL)))) : (min((((/* implicit */unsigned long long int) (unsigned char)8)), (8795958804480ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) var_6)))))))));
        var_18 = ((/* implicit */unsigned short) 8795958804484ULL);
        var_19 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)(-32767 - 1)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) max((2143800128U), (var_0)))) < (((-975842632667791046LL) | (((/* implicit */long long int) ((/* implicit */int) var_15))))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), ((+(0U)))))));
        var_21 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)58), (((/* implicit */unsigned char) arr_1 [i_0] [i_0])))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((175835789) > (((/* implicit */int) max(((unsigned char)208), (var_1))))))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_22 = ((((((((/* implicit */_Bool) (unsigned char)248)) ? (2068032011840887713LL) : (975842632667791075LL))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) -175835806)), (1607986425U)))))) << (((((/* implicit */int) arr_4 [i_1])) - (63338))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 7; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] [i_3 + 2] [i_3] [i_3] [i_3 + 1] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))))))));
                        var_23 = var_10;
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_1] [i_4])) != (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)15)), ((unsigned char)36)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))) > (-6561667635689498117LL)))) >= (((/* implicit */int) (unsigned char)36))))) : (((/* implicit */int) ((((2609709024U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    {
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 975842632667791060LL)) && (((/* implicit */_Bool) 8795958804480ULL))))))) != (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2609709024U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned char)240))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        var_27 *= ((/* implicit */unsigned int) max(((+(arr_9 [i_8] [i_8] [i_8] [i_8]))), (((/* implicit */long long int) ((arr_17 [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) (unsigned char)13)))))))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    {
                        var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (min((((/* implicit */unsigned long long int) 3082367965772473288LL)), (18446735277750747126ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */long long int) 2609709006U)) / (144115188075855871LL)))))) : (14534487822076148970ULL)));
                        var_29 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)26)))), (((((/* implicit */int) (unsigned char)230)) >> (((/* implicit */int) (unsigned char)14))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 1) 
        {
            for (unsigned int i_13 = 2; i_13 < 9; i_13 += 3) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_12] [i_13] [i_13]))) / (arr_2 [i_8]))) : (max((2609709045U), (((/* implicit */unsigned int) (unsigned char)24)))))));
                    var_31 = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) 7133056274926817223LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5175))) : (18446735277750747147ULL)))))));
                }
            } 
        } 
        var_32 ^= arr_31 [i_8] [i_8];
    }
    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_15 = 4; i_15 < 8; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                {
                    var_33 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_41 [(signed char)2] [i_14] [i_15 - 2])) ? (((/* implicit */int) arr_41 [(signed char)8] [i_14] [i_15 - 4])) : (((/* implicit */int) arr_41 [i_15] [i_14] [i_15 - 3]))))));
                    var_34 += ((((/* implicit */_Bool) max((((144115188075855873LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)118))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (signed char)104)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((0ULL) == (18446735277750747126ULL)))) >> (((/* implicit */int) ((((/* implicit */int) arr_13 [i_14] [i_15])) == (((/* implicit */int) (unsigned short)27150)))))))) : (max(((~(var_11))), (((/* implicit */unsigned long long int) max((var_12), (arr_29 [i_14])))))));
                    arr_51 [i_14] [5LL] [i_16] = ((/* implicit */unsigned short) ((var_8) >> ((((-(((/* implicit */int) (unsigned char)232)))) + (256)))));
                }
            } 
        } 
        var_35 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((2001622009) - (2001621981)))))) < (min((var_8), (var_0))))) ? (((((/* implicit */_Bool) (unsigned char)59)) ? (1685258270U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))) : ((+(((((/* implicit */_Bool) (signed char)54)) ? (268435455U) : (4147222602U)))))));
        var_36 += ((/* implicit */unsigned int) ((var_15) ? (var_5) : (((/* implicit */unsigned long long int) ((int) arr_23 [i_14] [(signed char)2] [i_14] [i_14] [i_14])))));
        arr_52 [(unsigned char)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)62))));
        var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 144115188075855871LL))));
    }
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1536))) : (((((/* implicit */_Bool) (unsigned short)51757)) ? (18446735277750747126ULL) : (((/* implicit */unsigned long long int) -9223372036854775807LL))))))) ? (var_5) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((/* implicit */int) var_10)))))))));
    var_39 = ((/* implicit */int) var_15);
}
